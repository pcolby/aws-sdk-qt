// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTRESPONSE_H
#define QTAWS_CREATEPROJECTRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createprojectrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateProjectResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateProjectResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateProjectResponse(const CreateProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectResponse)
    Q_DISABLE_COPY(CreateProjectResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
