// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILETAGSRESPONSE_H
#define QTAWS_LISTINSTANCEPROFILETAGSRESPONSE_H

#include "iamresponse.h"
#include "listinstanceprofiletagsrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfileTagsResponsePrivate;

class QTAWSIAM_EXPORT ListInstanceProfileTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListInstanceProfileTagsResponse(const ListInstanceProfileTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceProfileTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfileTagsResponse)
    Q_DISABLE_COPY(ListInstanceProfileTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
