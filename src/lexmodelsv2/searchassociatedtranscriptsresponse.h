// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHASSOCIATEDTRANSCRIPTSRESPONSE_H
#define QTAWS_SEARCHASSOCIATEDTRANSCRIPTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "searchassociatedtranscriptsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class SearchAssociatedTranscriptsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT SearchAssociatedTranscriptsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    SearchAssociatedTranscriptsResponse(const SearchAssociatedTranscriptsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchAssociatedTranscriptsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAssociatedTranscriptsResponse)
    Q_DISABLE_COPY(SearchAssociatedTranscriptsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
