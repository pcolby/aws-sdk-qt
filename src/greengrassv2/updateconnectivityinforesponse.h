// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYINFORESPONSE_H
#define QTAWS_UPDATECONNECTIVITYINFORESPONSE_H

#include "greengrassv2response.h"
#include "updateconnectivityinforequest.h"

namespace QtAws {
namespace GreengrassV2 {

class UpdateConnectivityInfoResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT UpdateConnectivityInfoResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    UpdateConnectivityInfoResponse(const UpdateConnectivityInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectivityInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectivityInfoResponse)
    Q_DISABLE_COPY(UpdateConnectivityInfoResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
