// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTJOBSRESPONSE_H
#define QTAWS_LISTIMPORTJOBSRESPONSE_H

#include "sesv2response.h"
#include "listimportjobsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListImportJobsResponsePrivate;

class QTAWSSESV2_EXPORT ListImportJobsResponse : public SESv2Response {
    Q_OBJECT

public:
    ListImportJobsResponse(const ListImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportJobsResponse)
    Q_DISABLE_COPY(ListImportJobsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
