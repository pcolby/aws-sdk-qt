// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKCONTACTREQUEST_H
#define QTAWS_STARTTASKCONTACTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StartTaskContactRequestPrivate;

class QTAWSCONNECT_EXPORT StartTaskContactRequest : public ConnectRequest {

public:
    StartTaskContactRequest(const StartTaskContactRequest &other);
    StartTaskContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTaskContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
