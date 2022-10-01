// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALNETWORKSRESPONSE_H
#define QTAWS_DESCRIBEGLOBALNETWORKSRESPONSE_H

#include "networkmanagerresponse.h"
#include "describeglobalnetworksrequest.h"

namespace QtAws {
namespace NetworkManager {

class DescribeGlobalNetworksResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DescribeGlobalNetworksResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DescribeGlobalNetworksResponse(const DescribeGlobalNetworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalNetworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalNetworksResponse)
    Q_DISABLE_COPY(DescribeGlobalNetworksResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
