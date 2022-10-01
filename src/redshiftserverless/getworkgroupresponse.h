// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPRESPONSE_H
#define QTAWS_GETWORKGROUPRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetWorkgroupResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetWorkgroupResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetWorkgroupResponse(const GetWorkgroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkgroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkgroupResponse)
    Q_DISABLE_COPY(GetWorkgroupResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
