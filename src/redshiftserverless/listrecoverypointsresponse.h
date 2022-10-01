// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSRESPONSE_H
#define QTAWS_LISTRECOVERYPOINTSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listrecoverypointsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListRecoveryPointsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListRecoveryPointsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListRecoveryPointsResponse(const ListRecoveryPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecoveryPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsResponse)
    Q_DISABLE_COPY(ListRecoveryPointsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
