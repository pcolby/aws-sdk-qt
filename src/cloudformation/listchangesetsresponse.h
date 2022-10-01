// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_H
#define QTAWS_LISTCHANGESETSRESPONSE_H

#include "cloudformationresponse.h"
#include "listchangesetsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListChangeSetsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListChangeSetsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListChangeSetsResponse(const ListChangeSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChangeSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangeSetsResponse)
    Q_DISABLE_COPY(ListChangeSetsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
