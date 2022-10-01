// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETREQUEST_H
#define QTAWS_DELETECONFIGURATIONSETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetRequestPrivate;

class QTAWSSES_EXPORT DeleteConfigurationSetRequest : public SesRequest {

public:
    DeleteConfigurationSetRequest(const DeleteConfigurationSetRequest &other);
    DeleteConfigurationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
