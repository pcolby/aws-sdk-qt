// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTPROJECTRESPONSE_H
#define QTAWS_EXPORTPROJECTRESPONSE_H

#include "mobileresponse.h"
#include "exportprojectrequest.h"

namespace QtAws {
namespace Mobile {

class ExportProjectResponsePrivate;

class QTAWSMOBILE_EXPORT ExportProjectResponse : public MobileResponse {
    Q_OBJECT

public:
    ExportProjectResponse(const ExportProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportProjectResponse)
    Q_DISABLE_COPY(ExportProjectResponse)

};

} // namespace Mobile
} // namespace QtAws

#endif
