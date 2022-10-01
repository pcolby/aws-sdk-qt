// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESPONSE_H
#define QTAWS_UNTAGRESPONSE_H

#include "resourcegroupsresponse.h"
#include "untagrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UntagResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT UntagResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    UntagResponse(const UntagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResponse)
    Q_DISABLE_COPY(UntagResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
