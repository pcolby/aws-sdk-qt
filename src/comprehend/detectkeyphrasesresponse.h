// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTKEYPHRASESRESPONSE_H
#define QTAWS_DETECTKEYPHRASESRESPONSE_H

#include "comprehendresponse.h"
#include "detectkeyphrasesrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectKeyPhrasesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectKeyPhrasesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectKeyPhrasesResponse(const DetectKeyPhrasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectKeyPhrasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectKeyPhrasesResponse)
    Q_DISABLE_COPY(DetectKeyPhrasesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
