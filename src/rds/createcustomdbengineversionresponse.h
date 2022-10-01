// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDBENGINEVERSIONRESPONSE_H
#define QTAWS_CREATECUSTOMDBENGINEVERSIONRESPONSE_H

#include "rdsresponse.h"
#include "createcustomdbengineversionrequest.h"

namespace QtAws {
namespace Rds {

class CreateCustomDBEngineVersionResponsePrivate;

class QTAWSRDS_EXPORT CreateCustomDBEngineVersionResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateCustomDBEngineVersionResponse(const CreateCustomDBEngineVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomDBEngineVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomDBEngineVersionResponse)
    Q_DISABLE_COPY(CreateCustomDBEngineVersionResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
