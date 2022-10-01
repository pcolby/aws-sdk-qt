// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPRESPONSE_H
#define QTAWS_UPDATEWORKGROUPRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "updateworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateWorkgroupResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateWorkgroupResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    UpdateWorkgroupResponse(const UpdateWorkgroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkgroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkgroupResponse)
    Q_DISABLE_COPY(UpdateWorkgroupResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
