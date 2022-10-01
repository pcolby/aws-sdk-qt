// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWABLEHITSRESPONSE_H
#define QTAWS_LISTREVIEWABLEHITSRESPONSE_H

#include "mturkresponse.h"
#include "listreviewablehitsrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewableHITsResponsePrivate;

class QTAWSMTURK_EXPORT ListReviewableHITsResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListReviewableHITsResponse(const ListReviewableHITsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReviewableHITsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReviewableHITsResponse)
    Q_DISABLE_COPY(ListReviewableHITsResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
