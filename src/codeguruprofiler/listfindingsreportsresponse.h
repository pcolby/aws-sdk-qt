// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREPORTSRESPONSE_H
#define QTAWS_LISTFINDINGSREPORTSRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "listfindingsreportsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListFindingsReportsResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT ListFindingsReportsResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    ListFindingsReportsResponse(const ListFindingsReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingsReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsReportsResponse)
    Q_DISABLE_COPY(ListFindingsReportsResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
