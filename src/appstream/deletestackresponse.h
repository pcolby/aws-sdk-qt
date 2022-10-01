// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKRESPONSE_H
#define QTAWS_DELETESTACKRESPONSE_H

#include "appstreamresponse.h"
#include "deletestackrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteStackResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteStackResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteStackResponse(const DeleteStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStackResponse)
    Q_DISABLE_COPY(DeleteStackResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
