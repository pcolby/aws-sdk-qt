// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEXTTRANSLATIONJOBRESPONSE_H
#define QTAWS_DESCRIBETEXTTRANSLATIONJOBRESPONSE_H

#include "translateresponse.h"
#include "describetexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class DescribeTextTranslationJobResponsePrivate;

class QTAWSTRANSLATE_EXPORT DescribeTextTranslationJobResponse : public TranslateResponse {
    Q_OBJECT

public:
    DescribeTextTranslationJobResponse(const DescribeTextTranslationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTextTranslationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTextTranslationJobResponse)
    Q_DISABLE_COPY(DescribeTextTranslationJobResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
