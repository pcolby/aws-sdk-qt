// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSRESPONSE_H
#define QTAWS_LISTREPORTSRESPONSE_H

#include "codebuildresponse.h"
#include "listreportsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListReportsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListReportsResponse(const ListReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportsResponse)
    Q_DISABLE_COPY(ListReportsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
