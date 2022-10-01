// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEXTTRANSLATIONJOBSRESPONSE_H
#define QTAWS_LISTTEXTTRANSLATIONJOBSRESPONSE_H

#include "translateresponse.h"
#include "listtexttranslationjobsrequest.h"

namespace QtAws {
namespace Translate {

class ListTextTranslationJobsResponsePrivate;

class QTAWSTRANSLATE_EXPORT ListTextTranslationJobsResponse : public TranslateResponse {
    Q_OBJECT

public:
    ListTextTranslationJobsResponse(const ListTextTranslationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTextTranslationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTextTranslationJobsResponse)
    Q_DISABLE_COPY(ListTextTranslationJobsResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
