// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREADDRESSTOCLASSICRESPONSE_H
#define QTAWS_RESTOREADDRESSTOCLASSICRESPONSE_H

#include "ec2response.h"
#include "restoreaddresstoclassicrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreAddressToClassicResponsePrivate;

class QTAWSEC2_EXPORT RestoreAddressToClassicResponse : public Ec2Response {
    Q_OBJECT

public:
    RestoreAddressToClassicResponse(const RestoreAddressToClassicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreAddressToClassicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreAddressToClassicResponse)
    Q_DISABLE_COPY(RestoreAddressToClassicResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
