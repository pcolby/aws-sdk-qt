// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESREQUEST_H
#define QTAWS_SEARCHFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT SearchFacesRequest : public RekognitionRequest {

public:
    SearchFacesRequest(const SearchFacesRequest &other);
    SearchFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
