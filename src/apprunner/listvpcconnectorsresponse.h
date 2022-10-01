// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCCONNECTORSRESPONSE_H
#define QTAWS_LISTVPCCONNECTORSRESPONSE_H

#include "apprunnerresponse.h"
#include "listvpcconnectorsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListVpcConnectorsResponsePrivate;

class QTAWSAPPRUNNER_EXPORT ListVpcConnectorsResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    ListVpcConnectorsResponse(const ListVpcConnectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVpcConnectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVpcConnectorsResponse)
    Q_DISABLE_COPY(ListVpcConnectorsResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
