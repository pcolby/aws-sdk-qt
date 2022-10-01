// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBBOOKMARKRESPONSE_H
#define QTAWS_GETJOBBOOKMARKRESPONSE_H

#include "glueresponse.h"
#include "getjobbookmarkrequest.h"

namespace QtAws {
namespace Glue {

class GetJobBookmarkResponsePrivate;

class QTAWSGLUE_EXPORT GetJobBookmarkResponse : public GlueResponse {
    Q_OBJECT

public:
    GetJobBookmarkResponse(const GetJobBookmarkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobBookmarkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobBookmarkResponse)
    Q_DISABLE_COPY(GetJobBookmarkResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
