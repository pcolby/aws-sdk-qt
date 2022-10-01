// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKDOCSRESPONSE_P_H
#define QTAWS_WORKDOCSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class WorkDocsResponse;

class WorkDocsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkDocsResponsePrivate(WorkDocsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkDocsResponse)
    Q_DISABLE_COPY(WorkDocsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
