// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPRESPONSE_H
#define QTAWS_CREATEWORKGROUPRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "createworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateWorkgroupResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateWorkgroupResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    CreateWorkgroupResponse(const CreateWorkgroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkgroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkgroupResponse)
    Q_DISABLE_COPY(CreateWorkgroupResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
