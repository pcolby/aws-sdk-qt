// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPRESPONSE_H
#define QTAWS_DELETEAPPRESPONSE_H

#include "opsworksresponse.h"
#include "deleteapprequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteAppResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeleteAppResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeleteAppResponse(const DeleteAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppResponse)
    Q_DISABLE_COPY(DeleteAppResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
