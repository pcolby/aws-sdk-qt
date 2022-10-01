// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHJOBSRESPONSE_H
#define QTAWS_SEARCHJOBSRESPONSE_H

#include "braketresponse.h"
#include "searchjobsrequest.h"

namespace QtAws {
namespace Braket {

class SearchJobsResponsePrivate;

class QTAWSBRAKET_EXPORT SearchJobsResponse : public BraketResponse {
    Q_OBJECT

public:
    SearchJobsResponse(const SearchJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchJobsResponse)
    Q_DISABLE_COPY(SearchJobsResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
