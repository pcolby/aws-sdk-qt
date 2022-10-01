// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILETIMESRESPONSE_H
#define QTAWS_LISTPROFILETIMESRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "listprofiletimesrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfileTimesResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT ListProfileTimesResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    ListProfileTimesResponse(const ListProfileTimesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfileTimesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileTimesResponse)
    Q_DISABLE_COPY(ListProfileTimesResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
