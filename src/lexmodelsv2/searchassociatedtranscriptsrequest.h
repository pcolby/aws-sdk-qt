// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHASSOCIATEDTRANSCRIPTSREQUEST_H
#define QTAWS_SEARCHASSOCIATEDTRANSCRIPTSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class SearchAssociatedTranscriptsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT SearchAssociatedTranscriptsRequest : public LexModelsV2Request {

public:
    SearchAssociatedTranscriptsRequest(const SearchAssociatedTranscriptsRequest &other);
    SearchAssociatedTranscriptsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAssociatedTranscriptsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
