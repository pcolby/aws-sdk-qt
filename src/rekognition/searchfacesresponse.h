// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESRESPONSE_H
#define QTAWS_SEARCHFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "searchfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT SearchFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    SearchFacesResponse(const SearchFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFacesResponse)
    Q_DISABLE_COPY(SearchFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
