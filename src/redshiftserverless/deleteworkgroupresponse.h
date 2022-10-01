// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPRESPONSE_H
#define QTAWS_DELETEWORKGROUPRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "deleteworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteWorkgroupResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteWorkgroupResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    DeleteWorkgroupResponse(const DeleteWorkgroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkgroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkgroupResponse)
    Q_DISABLE_COPY(DeleteWorkgroupResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
