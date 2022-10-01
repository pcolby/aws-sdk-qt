// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKTEMPLATEREQUEST_H
#define QTAWS_DELETETASKTEMPLATEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteTaskTemplateRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteTaskTemplateRequest : public ConnectRequest {

public:
    DeleteTaskTemplateRequest(const DeleteTaskTemplateRequest &other);
    DeleteTaskTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
