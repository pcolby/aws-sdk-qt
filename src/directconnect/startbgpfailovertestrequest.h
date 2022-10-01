// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBGPFAILOVERTESTREQUEST_H
#define QTAWS_STARTBGPFAILOVERTESTREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class StartBgpFailoverTestRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT StartBgpFailoverTestRequest : public DirectConnectRequest {

public:
    StartBgpFailoverTestRequest(const StartBgpFailoverTestRequest &other);
    StartBgpFailoverTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBgpFailoverTestRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
