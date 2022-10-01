// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACESREQUEST_H
#define QTAWS_LISTFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListFacesRequest : public RekognitionRequest {

public:
    ListFacesRequest(const ListFacesRequest &other);
    ListFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
