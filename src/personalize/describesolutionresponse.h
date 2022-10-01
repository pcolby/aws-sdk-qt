// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONRESPONSE_H
#define QTAWS_DESCRIBESOLUTIONRESPONSE_H

#include "personalizeresponse.h"
#include "describesolutionrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeSolutionResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeSolutionResponse(const DescribeSolutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSolutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSolutionResponse)
    Q_DISABLE_COPY(DescribeSolutionResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
