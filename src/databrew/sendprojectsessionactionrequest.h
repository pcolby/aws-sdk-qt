// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPROJECTSESSIONACTIONREQUEST_H
#define QTAWS_SENDPROJECTSESSIONACTIONREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class SendProjectSessionActionRequestPrivate;

class QTAWSDATABREW_EXPORT SendProjectSessionActionRequest : public DataBrewRequest {

public:
    SendProjectSessionActionRequest(const SendProjectSessionActionRequest &other);
    SendProjectSessionActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendProjectSessionActionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
