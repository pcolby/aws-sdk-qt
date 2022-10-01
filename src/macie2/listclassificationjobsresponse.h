// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLASSIFICATIONJOBSRESPONSE_H
#define QTAWS_LISTCLASSIFICATIONJOBSRESPONSE_H

#include "macie2response.h"
#include "listclassificationjobsrequest.h"

namespace QtAws {
namespace Macie2 {

class ListClassificationJobsResponsePrivate;

class QTAWSMACIE2_EXPORT ListClassificationJobsResponse : public Macie2Response {
    Q_OBJECT

public:
    ListClassificationJobsResponse(const ListClassificationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClassificationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClassificationJobsResponse)
    Q_DISABLE_COPY(ListClassificationJobsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
