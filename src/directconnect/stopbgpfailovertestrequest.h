// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBGPFAILOVERTESTREQUEST_H
#define QTAWS_STOPBGPFAILOVERTESTREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class StopBgpFailoverTestRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT StopBgpFailoverTestRequest : public DirectConnectRequest {

public:
    StopBgpFailoverTestRequest(const StopBgpFailoverTestRequest &other);
    StopBgpFailoverTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBgpFailoverTestRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
