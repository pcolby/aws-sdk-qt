// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDIRECTORYRESPONSE_H
#define QTAWS_ENABLEDIRECTORYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "enabledirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class EnableDirectoryResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT EnableDirectoryResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    EnableDirectoryResponse(const EnableDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDirectoryResponse)
    Q_DISABLE_COPY(EnableDirectoryResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
