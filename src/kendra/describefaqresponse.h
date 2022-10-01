// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFAQRESPONSE_H
#define QTAWS_DESCRIBEFAQRESPONSE_H

#include "kendraresponse.h"
#include "describefaqrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeFaqResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeFaqResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeFaqResponse(const DescribeFaqRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFaqRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFaqResponse)
    Q_DISABLE_COPY(DescribeFaqResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
