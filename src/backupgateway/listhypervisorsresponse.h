// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERVISORSRESPONSE_H
#define QTAWS_LISTHYPERVISORSRESPONSE_H

#include "backupgatewayresponse.h"
#include "listhypervisorsrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListHypervisorsResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT ListHypervisorsResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    ListHypervisorsResponse(const ListHypervisorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHypervisorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHypervisorsResponse)
    Q_DISABLE_COPY(ListHypervisorsResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
