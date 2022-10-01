// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLFTAGSRESPONSE_H
#define QTAWS_LISTLFTAGSRESPONSE_H

#include "lakeformationresponse.h"
#include "listlftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListLFTagsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ListLFTagsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ListLFTagsResponse(const ListLFTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLFTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLFTagsResponse)
    Q_DISABLE_COPY(ListLFTagsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
