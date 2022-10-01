// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSRESPONSE_H
#define QTAWS_CREATETAGSRESPONSE_H

#include "workspacesresponse.h"
#include "createtagsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateTagsResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateTagsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateTagsResponse(const CreateTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTagsResponse)
    Q_DISABLE_COPY(CreateTagsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
