// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTPOLICIESRESPONSE_H
#define QTAWS_LISTPROJECTPOLICIESRESPONSE_H

#include "rekognitionresponse.h"
#include "listprojectpoliciesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListProjectPoliciesResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListProjectPoliciesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListProjectPoliciesResponse(const ListProjectPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProjectPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectPoliciesResponse)
    Q_DISABLE_COPY(ListProjectPoliciesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
