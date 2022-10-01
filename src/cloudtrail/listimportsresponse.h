// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSRESPONSE_H
#define QTAWS_LISTIMPORTSRESPONSE_H

#include "cloudtrailresponse.h"
#include "listimportsrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListImportsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListImportsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListImportsResponse(const ListImportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportsResponse)
    Q_DISABLE_COPY(ListImportsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
