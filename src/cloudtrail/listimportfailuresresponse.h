// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFAILURESRESPONSE_H
#define QTAWS_LISTIMPORTFAILURESRESPONSE_H

#include "cloudtrailresponse.h"
#include "listimportfailuresrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListImportFailuresResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListImportFailuresResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListImportFailuresResponse(const ListImportFailuresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImportFailuresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportFailuresResponse)
    Q_DISABLE_COPY(ListImportFailuresResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
