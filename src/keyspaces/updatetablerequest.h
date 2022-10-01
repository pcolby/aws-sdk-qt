// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREQUEST_H
#define QTAWS_UPDATETABLEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class UpdateTableRequestPrivate;

class QTAWSKEYSPACES_EXPORT UpdateTableRequest : public KeyspacesRequest {

public:
    UpdateTableRequest(const UpdateTableRequest &other);
    UpdateTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
