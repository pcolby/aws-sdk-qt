// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESPONSE_H
#define QTAWS_TAGRESPONSE_H

#include "resourcegroupsresponse.h"
#include "tagrequest.h"

namespace QtAws {
namespace ResourceGroups {

class TagResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT TagResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    TagResponse(const TagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResponse)
    Q_DISABLE_COPY(TagResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
