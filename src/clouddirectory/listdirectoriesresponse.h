// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIRECTORIESRESPONSE_H
#define QTAWS_LISTDIRECTORIESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listdirectoriesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDirectoriesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListDirectoriesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListDirectoriesResponse(const ListDirectoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDirectoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDirectoriesResponse)
    Q_DISABLE_COPY(ListDirectoriesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
