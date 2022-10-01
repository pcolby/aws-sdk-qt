// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESHAREREQUEST_H
#define QTAWS_DELETERESOURCESHAREREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class DeleteResourceShareRequestPrivate;

class QTAWSRAM_EXPORT DeleteResourceShareRequest : public RamRequest {

public:
    DeleteResourceShareRequest(const DeleteResourceShareRequest &other);
    DeleteResourceShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
