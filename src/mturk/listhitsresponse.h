// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSRESPONSE_H
#define QTAWS_LISTHITSRESPONSE_H

#include "mturkresponse.h"
#include "listhitsrequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsResponsePrivate;

class QTAWSMTURK_EXPORT ListHITsResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListHITsResponse(const ListHITsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHITsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHITsResponse)
    Q_DISABLE_COPY(ListHITsResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
