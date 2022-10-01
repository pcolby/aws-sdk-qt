// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETJOBBOOKMARKRESPONSE_H
#define QTAWS_RESETJOBBOOKMARKRESPONSE_H

#include "glueresponse.h"
#include "resetjobbookmarkrequest.h"

namespace QtAws {
namespace Glue {

class ResetJobBookmarkResponsePrivate;

class QTAWSGLUE_EXPORT ResetJobBookmarkResponse : public GlueResponse {
    Q_OBJECT

public:
    ResetJobBookmarkResponse(const ResetJobBookmarkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetJobBookmarkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetJobBookmarkResponse)
    Q_DISABLE_COPY(ResetJobBookmarkResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
