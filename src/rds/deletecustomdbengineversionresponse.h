// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDBENGINEVERSIONRESPONSE_H
#define QTAWS_DELETECUSTOMDBENGINEVERSIONRESPONSE_H

#include "rdsresponse.h"
#include "deletecustomdbengineversionrequest.h"

namespace QtAws {
namespace Rds {

class DeleteCustomDBEngineVersionResponsePrivate;

class QTAWSRDS_EXPORT DeleteCustomDBEngineVersionResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteCustomDBEngineVersionResponse(const DeleteCustomDBEngineVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomDBEngineVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomDBEngineVersionResponse)
    Q_DISABLE_COPY(DeleteCustomDBEngineVersionResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
